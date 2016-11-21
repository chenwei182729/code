#!/bin/bash
#递归删除文件夹中的*.exe *.out *~文件
#示例 bash del.sh .
function del_file_from_dir(){
for file in `ls $1`
    do
        if [ -d $1"/"$file ]  
        then
            echo $file " is dir"
            rm -rf $1"/"$file/*.exe $1"/"$file/*.out $1"/"$file/*~
            #
			del_file_from_dir $1"/"$file
        else
            echo $file
        fi
    done
}

del_file_from_dir $1