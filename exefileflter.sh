#!/bin/bash
###
 # @Author: wolf-li
 # @Date: 2024-11-10 15:58:36
 # @LastEditTime: 2024-11-10 16:22:51
 # @LastEditors: wolf-li
 # @Description: 筛选所有可执行文件
 # @FilePath: /c_code/Linux system programming techniques/exefileflter.sh
 # talk is cheep show me your code.
### 

function list_files(){
    for file in "$1"/*;do
        if [ -d "$file" ];then 
            list_files "$file"
        elif [ -f "$file" ];then
            if file $file | grep "64-bit executable" 1>/dev/null 2>/dev/null;then
                echo "$file" >> ".gitignore"
            fi  
        fi
    done
}

function create_gitignore(){
    if [ ! -f ".gitignore" ];then
        touch ".gitignore"
    fi
    cat >> .gitignore << EOF
.idea/
.vscode/
.DS_Store/
*.swap
*.swo
*-
Thumbs.db
EOF
}

create_gitignore
list_files .
