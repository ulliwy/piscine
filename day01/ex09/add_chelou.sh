echo "obase=13; $(echo "ibase=5; $(echo $FT_NBR1 + $FT_NBR2 | tr "\\\'\"?\!" "10234" | tr "mrdoc" "01234")" | bc)" | bc | tr "0123456789ABC" "gtaio luSnemf"
