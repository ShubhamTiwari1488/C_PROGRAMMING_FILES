//CONVERTING INFIX TO PREFIX

# include <stdio.h>
# include <string.h>
# define MAX 20
void infixtoprefix(char infix[20],char prefix[20]);
void reverse(char array[30]);
char pop();
void push(char symbol);
int isOperator(char symbol);
int prcd(char symbol);
int top=-1;
char stack[MAX];
int main() {
	char infix[20],prefix[20],temp;
	printf("\nEnter infix operation: ");
	fgets(infix,20,stdin);
	infixtoprefix(infix,prefix);
	reverse(prefix);
	
	printf("\nThe Prefix expression will be : ");
	puts((prefix));
	
	return 0;
}
//--------------------------------------------------------
void infixtoprefix(char infix[20],char prefix[20]) {
	int i,j=0;
	char symbol;
	stack[++top]='#';
	reverse(infix);
	for(i=0;i<strlen(infix);i++) {
		symbol=infix[i];
		if (isOperator(symbol)==0) {
			prefix[j]=symbol;
			j++;
		} else {
			if (symbol==')') {
				push(symbol);
			} else if(symbol == '(') {
				while (stack[top]!=')') {
					prefix[j]=pop();
					j++;
				}
				pop();
			} else {
				if (prcd(stack[top])<=prcd(symbol)) {
					push(symbol);
				} else {
					while(prcd(stack[top])>=prcd(symbol)) {
						prefix[j]=pop();
						j++;
					}
					push(symbol);
				}
				//end for else
			}
		}
		//end for else
	}
	//end for for
	while (stack[top]!='#') {
		prefix[j]=pop();
		j++;
	}
	prefix[j]='\0';
}
////--------------------------------------------------------
void reverse(char array[30]) // for reverse of the given expression 
{
	int i,j,len;
	char temp[100];
	len=strlen(array);
	
	for(i=len-1,j=0;i+1!=0;i--,++j) {
		temp[j]=array[i];
	}
	temp[j]='\0';
	strcpy(array,temp);
}
//--------------------------------
char pop() {
	char a;
	a=stack[top];
	top--;
	return a;
}
//----------------------------------
void push(char symbol) {
	top++;
	stack[top]=symbol;
}
//------------------------------------------
int prcd(char symbol) // returns the value that helps in the precedence 
{
	switch(symbol) {
		case '+':
		        case '-':
		        return 2;
		break;
		case '*':
		        case '/':
		        return 4;
		break;
		case '$':
		        case '^':
		        return 6;
		break;
		case '#':
		        case '(':
		        case ')':
		        return 1;
		break;
	}
}
//-------------------------------------------------
int isOperator(char symbol) {
	switch(symbol) {
		case '+':
		        case '-':
		        case '*':
		        case '/':
		        case '^':
		        case '$':
		        case '&':
		        case '(':
		        case ')':
		        return 1;
		break;
		default:
		        return 0;
		// returns 0 if the symbol is other than given above
	}
}
