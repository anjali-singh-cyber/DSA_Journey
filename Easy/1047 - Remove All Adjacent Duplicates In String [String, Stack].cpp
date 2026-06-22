
// =========================
// Language: c
// =========================

// -------- Method 1 --------


#define MAX 100000
char* removeDuplicates(char* s) {
    static char stack[MAX];
    int top = -1;
    for(int i=0;s[i]!='\0';i++){
        char curr = s[i];
        if(top>=0&& stack[top]==curr) top--;
        else stack[++top]= curr;
    } 
    stack[top + 1]='\0';
    return stack;
}

