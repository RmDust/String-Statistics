
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool IsNum(char N) {
        if(N >= 48 && N <= 57) {
                return true; 
        }
        
        return false;
}

bool IsLetter(char N) {
        if((N >= 65 && N <= 90) || (N >= 97 && N <= 122)) {
                return true; 
        }
        
        return false;
}

bool IsSpace(char N) {
        if(N == '\x20') {
                return true; 
        }
        
        return false;
}


int main(void) {
        
        char List[128];
        
        struct {
                int Spaces;
                int Numbers;
                int Letters;
                int Others;
        } Count = {0, 0, 0, 0};
        
        // 输入字符串 
        gets(List) ;
        
        // 计算各字符个数 
        for(size_t Index = 0; Index < strlen(List); Index += 1) {
                
                if(IsNum(List[Index])) {
                        Count.Numbers += 1;
                } else if(IsLetter(List[Index])) {
                        Count.Letters += 1;
                } else if(IsSpace(List[Index])) {
                        Count.Spaces += 1;
                } else {
                        Count.Others += 1;
                }
                
        }
        
        
        // 输出结果 
        printf(
                "\n%d个英文字母\n%d个数字字符\n%d个空格字符\n%d个其他字符",
                Count.Letters,
                Count.Numbers,
                Count.Spaces,
                Count.Others
        );
        
        
        return 0;
}
