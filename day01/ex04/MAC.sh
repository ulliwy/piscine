ifconfig -a | grep "\tether" | cut -f 2 -d ' ' | cat -e
