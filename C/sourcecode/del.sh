#!/bin/bash
function del_file_from_dir(){
for file in `ls $1`
    do
        if [ -d $1"/"$file ]  
        then
            echo $file " is dir"
            rm -rf $1"/"$file/*.so  $1"/"$file/*.out $1"/"$file/*.o $1"/"$file/*~
            #
			del_file_from_dir $1"/"$file
        else
            echo $file
        fi
    done
}

del_file_from_dir $1
