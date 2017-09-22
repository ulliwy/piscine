ldapsearch -LLL -x 'sn=*bon*' sn | sed '/^$/d' | sed '/^[dn: ]/d' | wc -l | tr -d ' \t'
