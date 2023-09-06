FROM debian

#init
RUN apt update && apt upgrade -y
RUN apt install tor nginx ssl-cert vim -y
RUN mkdir -p /home/board/hidden_service

#Tor -> torrc (config file)
COPY ./confs/torrc /etc/tor/torrc

RUN service tor restart
RUN export TOR_DN=$(cat /var/lib/tor/hidden_service/hostname)

#Nginx site.conf
COPY ./confs/default /etc/nginx/sites-available/tor.conf

RUN make-ssl-cert generate-default-snakeoil
RUN usermod --append --groups ssl-cert root

#index.html (file)
COPY ./bins /home/board/hidden_service/
COPY ./www/index.html /home/board/hidden_service/

WORKDIR /home/
COPY entrypoint.sh .

ENTRYPOINT ["/bin/bash", "entrypoint.sh"]
