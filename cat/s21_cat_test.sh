#!/bin/bash

cat="cat "
s_21cat="./s21_cat "
SUCCESS=0
FAIL=0
COUNTER=0

testing(){
    ./s21_cat $var bytes.txt > test_s21_cat.log 
    cat $var bytes.txt > test_cat.log
    if cmp -s test_s21_cat.log test_cat.log
    then
    (( SUCCESS++ ))
    (( COUNTER++ ))

    echo "Test  №$COUNTER SUCCESS $var";
    else
    (( FAIL++ ))
    (( COUNTER++ ))

    echo "Test  №$COUNTER FAIL $var"
    fi
    rm test_s21_cat.log test_cat.log
}


for var1 in e b n s t v
do  
    var="-$var1"
    testing $var
done

echo "SUCCESS  $SUCCESS from $COUNTER ";
echo "FAILED  $FAIL from $COUNTER ";