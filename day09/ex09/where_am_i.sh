ifconfig | grep -o "inet [^ ]*" | grep -oE "([[:digit:]]+\.){3}[[:digit:]]+" || echo "Je suis perdu\!"