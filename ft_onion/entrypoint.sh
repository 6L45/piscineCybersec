export TOR_DN=$(cat /var/lib/tor/hidden_service/hostname)
ln -s /etc/nginx/sites-available/tor.conf /etc/nginx/sites-enabled/tor.conf

sed -i "s/server_name TOR_DN;/server_name $TOR_DN;/" /etc/nginx/sites-available/tor.conf

service tor start
service nginx reload

echo $TOR_DN

nginx -g "daemon off;"
