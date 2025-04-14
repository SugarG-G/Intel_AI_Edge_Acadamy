/***********************************************************/
// [10-1] �迭�� ���� ������ ������ �迭 ��� ���
/***********************************************************/

#if 0
#include <stdio.h>

int main(void)
{
	int array[3]; // 3ĭ �迭 �� 12byte.

    printf("%d\n", array);
    printf("%d\n",&array[0]);
    printf("%d\n", (array + 1));

    array[0] = 10;
    *(array + 1) = 20;
    // *(array + 3) = 10; ó�� ������ ��� �ּ� ��� ����

    for(int i = 0; i < 3; i++){
        printf("%d��° ��� : %d ", i, array[i]);
    }

	return 0;
}
#endif

/***********************************************************/
// [10-2] �迭��ó�� ���Ǵ� ������
/***********************************************************/

#if 0
#include <stdio.h>

int main(void)
{
	int array[3];
    int *pa = array;

    *pa = 10;
    // 20�� �迭 �� ��° ���(�ε��� 1)�� �Ҵ�
    //1.
    //  array[1] = 20;
    
    //2.
    //  *(array + 1) = 20;
    
    //3.
    //  *(pa + 1) = 20;
    
    //4.
    //  pa++, *pa = 20;

    for(int i = 0; i < 3; i++){
        printf("%d��° ��� : %d ", i, array[i] );
    }
    printf("\n");

    printf("�迭 ��ü�� ���� : %d\n", sizeof(array));
    printf("������ �ϳ��� ���� : %d\n", sizeof(pa));
    

	return 0;
}
#endif

/***********************************************************/
// [10-3] �����͸� �̿��� �迭�� �� ���
/***********************************************************/

#if 0
#include <stdio.h>

int main(void)
{
    int array[3] = {10, 20, 30};
    int *pa = array;

    printf("�迭�� �� : ");
    for(int i = 0; i < 3 ; i++){
        //printf("%d ", array[i]);
        
        // printf("%d ", *pa);
        // pa++;

        printf("%d ", *(pa++)); //���� ���� ������ ���� �ּ� ���� Ȯ���Ͽ� ������� üũ
        // printf("%d ", *(++pa)); // ���� ���� ������ ����� ���ϴ� ����� ������ ���� �� �ִ�.
    }
    pa = array; // pa�� ������ �Ұ�� �ٽ� �ּҰ��� �Ҵ� �ʿ�

	return 0;
}
#endif

/***********************************************************/
// [10-4] �������� �E���� ���� ����
/***********************************************************/

#if 0
#include <stdio.h>

int main(void)
{
    int array[5] = {10, 20, 30, 40, 50};
    int *pa = array;
    int *pb = array + 3;

    pa++;
    printf("pb - pa : %u\n", pb - pa);

    // �� ������ ��
    // �� �տ� �ִ� (�ε����� ����) ��� ���
    if(pa < pb){
        printf("%d\n", *pa);
    }
    else{
        printf("%d\n", *pb);
    }

	return 0;
}
#endif

/***********************************************************/
// [10-5] �迭�� ó���ϴ� �Լ�
/***********************************************************/

#if 0
#include <stdio.h>

void print_array(int *pa){
    for(int i = 0; i < 5; i++){
        printf("%d ", pa[i]);
    }
}

int main(void)
{
	int array[5] = {10, 20, 30, 40, 50};
    print_array(array);

	return 0;
}
#endif

/***********************************************************/
// [10-6] ũ�Ⱑ �ٸ� �迭�� ó���ϴ� �Լ�
/***********************************************************/

#if 0
#include <stdio.h>

void print_array(int *pa, int size){

    for(int i = 0; i < size; i++){
        printf("%d ", pa[i]);
    }
    printf("\n");
}

int main(void)
{
	int array[5] = {10, 20, 30, 40, 50};
    int array2[7] = {10, 20, 30, 40, 50, 60, 70};

    print_array(array, 5);
    print_array(array2, 7);

	return 0;
}
#endif

/***********************************************************/
// [10-7] �迭�� ���� �Է��ϴ� �Լ�
/***********************************************************/

#if 1
#include <stdio.h>

void input_array(int *pa, int size){
    for(int i = 0; i < size; i++){
        scanf("%d", &pa[i]);
    }
}

void print_array(int *pa, int size){
    for(int i = 0; i < size; i++){
        printf("%d ",pa[i]);
    }
    printf("\n");
}

int main(void)
{
    int array[5] = {0,};
    
    input_array(array, 5);
    print_array(array, 5);

	return 0;
}
#endif

/***********************************************************/
// [0-0] Ÿ��Ʋ
/***********************************************************/

#if 0
#include <stdio.h>

int main(void)
{
	
	return 0;
}
#endif

/***********************************************************/
// [0-0] Ÿ��Ʋ
/***********************************************************/

#if 0
#include <stdio.h>

int main(void)
{
	
	return 0;
}
#endif