#include <stdio.h>
#include <stdlib.h>

// 두 개의 서브 배열을 병합하는 함수
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // 임시 배열 생성
    int L[n1], R[n2];

    // 왼쪽과 오른쪽 서브 배열로 복사
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // 병합 단계
    i = 0; // 왼쪽 서브 배열의 인덱스
    j = 0; // 오른쪽 서브 배열의 인덱스
    k = left; // 원래 배열의 인덱스

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // 남은 원소들 복사
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// 병합 정렬 함수
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // 중간 지점 계산
        int mid = left + (right - left) / 2;

        // 왼쪽과 오른쪽 부분 배열을 정렬
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // 정렬된 부분 배열을 병합
        merge(arr, left, mid, right);
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int *numbers = (int *)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    // 병합 정렬 수행
    mergeSort(numbers, 0, N - 1);

    // 결과 출력
    for (int i = 0; i < N; i++) {
        printf("%d\n", numbers[i]);
    }

    // 동적 할당한 메모리 해제
    free(numbers);

    return 0;
}