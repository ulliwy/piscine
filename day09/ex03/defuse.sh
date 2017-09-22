touch -a -A -01 bomb.txt
c=`stat -f %a bomb.txt`
if [[ "$c" -le "0" ]]; then
echo BOOM
else
echo $c
fi