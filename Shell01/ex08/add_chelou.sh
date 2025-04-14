#!/bin/bash
nbr1=$(echo $FT_NBR1 | tr "\'\\\\\"\?\!" "01234" | xargs -I{} echo "ibase=5; {}" | bc)
nbr2=$(echo $FT_NBR2 | tr "mrdoc" "01234" | xargs -I{} echo "ibase=5; {}" | bc)
sum=$(echo "$nbr1 + $nbr2" | bc)
echo $sum | xargs -I{} echo "obase=13; {}" | bc | tr "0123456789ABC" "gtaio luSnemf"
