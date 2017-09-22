cat /etc/passwd | awk -F: '/^[^#]/' | awk "NR % 2 == 0" | cut -f1 -d':' | rev | sort -n -r | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | xargs | sed -e 's/ /, /g' | sed 's/$/./'
