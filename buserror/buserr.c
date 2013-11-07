
union{char a[10];int i;} u;
void main(){
	int *p = (int *)&(u.a[1]);
	*p=17;
}