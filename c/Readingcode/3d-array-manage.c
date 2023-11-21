//////////////////////////////////////////////
// 数据管理

#include <stdio.h>
#include <stdlib.h>
#define N 100

int main(){
	int s[N] = { 0 };
	int curr_size = 0, i, j, choose, num, index;

	while (1){
		printf("\n**********************\n");
		printf("1. 插入数据\n");
		printf("2. 删除数据\n");
		printf("3. 更新数据\n");
		printf("4. 查找数据\n");
		printf("5. 浏览数据\n");
		printf("6. 退出\n");
		printf("请输入你的操作：");
		scanf("%d", &choose);

		switch (choose){
		case 1:// 插入 
			if (curr_size >= N){
				printf("数据已满，不能插入了\n");
				continue;
			}
			printf("输入插入数据：");
			scanf("%d", &num);
			printf("输入插入位置：");
			scanf("%d", &index);
			if (index >= 0 && index < N){
				if (index >= curr_size)
					s[curr_size] = num;
				else{
					for (i = curr_size; i > index; i--)
						s[i] = s[i - 1];
					s[index] = num;
				}
				curr_size++;
			}
			else{
				printf("插入失败！\n");
			}
			break;
		case 2: // 删除 
			if (curr_size == 0){
				printf("数据已空，不能删除\n");
				continue;
			}
			printf("输入删除位置：");
			scanf("%d", &index);
			if (index >= 0 && index < curr_size){
				for (i = index; i < curr_size - 1; i++)
					s[i] = s[i + 1];
				curr_size--;
			}
			else{
				printf("删除失败！\n");
			}			
			break;
		case 3:// 更新
			if (curr_size == 0){
				printf("已无数据更新\n");
				continue;
			}
			printf("输入更新数据：");
			scanf("%d", &num);
			printf("输入更新位置：");
			scanf("%d", &index);
			if (index >= 0 && index < curr_size){
				s[index] = num;
			}
			else
				printf("更新位置无效！\n");
			break;
		case 4:// 查找 
			printf("输入查找数据：");
			scanf("%d", &num);
			for (i = 0; i < curr_size; i++){
				if (num == s[i])
					break;
			}
			if (i < curr_size)
				printf("查找成功，在%d位置找到了\n", i);
			else
				printf("未找到\n");
			break;
		case 5:// 浏览 
			printf("浏览结果：");
			for (i = 0; i < curr_size; i++)
				printf("%d ", s[i]);
			printf("\n") ;
			break;
		case 6: // 退出 
			exit(0);
		}
	}

	return 0;
}



///////////////////////////////////////////////