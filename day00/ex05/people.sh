ldapsearch -LLL -x "uid=z*" cn | sed '/^$/d' | grep -v 'dn:' | sort -r
