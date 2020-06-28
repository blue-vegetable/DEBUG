#!/bin/bash
rz
rz
rz
git pull https://github.com/blue-vegetable/DEBUG.git
git branch $1
git checkout  $1
git rm *.txt
git commit -m "delete some files"
git add *.c
for i in {1..5}
do 
	git commit $i.c -m "debug $i by yjq"
done
git commit *.c -m "nothing changes"
git push --set-upstream origin $1

