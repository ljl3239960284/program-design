////////////////////////////////////////////////////
// cop the string
#include <stdio.h>
int main(){
	char srcStr[50] = "未来学院";
	char objStr[50] = "中国人民银行";
	int i;
	for (i = 0; i < 50; i ++)
		objStr[i] = srcStr[i];

	printf("srcStr = %s\n", srcStr);
	printf("objStr = %s\n", objStr);
}
