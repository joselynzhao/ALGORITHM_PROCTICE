//char a[]相关
//求字符串长度
int getlen(char a[]){
	int len=0;
	for(int i=0;a[i]!='\0';i++)len++;
	return len;
}

// 补全既定字符串的符号
void getsym(char a[]){
	for(int i=getlen(a);i>=0;i--){
		a[i+1]=a[i];
	}
	a[0]='+';
}

// 16进制的字符串转换为10进制的int
int change16_10(char a[]){
	int n=0,len=getlen(a);
	//cout<<endl<<"len :"<<len<<endl;
	for(int i=len-1;i>0;i--){
		if(a[i]<='F' && a[i]>='A'){
			n+=(a[i]-'A'+10)*pow(16,len-i-1);
		//	 cout<<(a[i]-'A'+10)*pow(16,len-i-1)<<endl;
		}
		else {
			n+=(a[i]-'0')*pow(16,len-i-1);
			// cout<<(a[i]-'0')*pow(16,len-i-1)<<endl;
		}
	}
	if(a[0]=='-')n=0-n;
	return n;
}

// 10进制的int转换为16进制的字符串
void change10_16(char b[],int n){
	int k=0;
	if(n<0){
		b[0]='-';
		k++;
		n=0-n;
	}
	int i=0,reminder;
	char a[20];
	while(n){
		reminder = n%16;
		if(reminder > 9){
			a[i]='A'+(reminder-10);
		}
		else{
			a[i]=reminder+'0';
		}
		i++;
		n=n/16;
	}
	a[i]='\0';
	for(int i=getlen(a)-1;i>=0;i--){
		b[k]=a[i];
		k++;
	}
	b[k]='\0';
}

//判断s 是否为si的子串   -大小写敏感
bool is_substring_open(char s[],char si[]){
	int len_s = getlen(s),len_si = getlen(si);
	for(int i=0;i<len_si-len_s+1;i++){
		int f=1;
		for(int j=i;j<len_s;j++){
			if(s[j]!=si[j]){
				f=0;
				break;
			}
		}
		if(f==0)return false;
		else return true;
	}
}
//判断s 是否为si的子串   -不区分大小写
bool is_substring_close(char s[],char si[]){
	int len_s = getlen (s),len_si = getlen(si);
	char si_temp[N];
	for(int i=0;i<len_si;i++){  //拷贝si字符串
		si_temp[i]=si[i];
	}
	all_max(s);
	all_max(si_temp);
	return is_substring_open(s,si_temp);
}

// string 转化为整型，返回类型long long
long long string_int(char a[]){
	int len=0;
	for(int i=0;a[i]!='\0';i++){
		len++;
	}
	long long k=0;
	for(int i=len-1;i>=0;i--){
		k+=(a[i]-'0')*pow(10,len-i-1);
	}
	return k;
}


//插入排序，从小到大
for(int i=1;i<n;i++){
		int key=a[i];
		int j=i-1;
		while(j>=0&&a[j]>key){
			a[j+1]=a[j];
			j--;
		} 
		a[j+1]=key;
	}