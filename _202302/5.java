import java.util.Arrays;         
// EN: Arrays utility class (for copyOf) 
// KO: 배열 관련 유틸 클래스 (copyOf 사용)

import java.util.StringTokenizer; 
// EN: Class for splitting string into tokens 
// KO: 문자열을 토큰 단위로 분리하는 클래스

public class Test {

    // EN: Function to copy original array and append a new value
    // KO: 원래 배열을 복사하고 새로운 값을 추가하는 함수
    public static int[] Add(int[] originalArr, int val) {
        // EN: Copy original array to new array with length+1
        // KO: 원본 배열을 길이+1로 복사
        int[] newArray = Arrays.copyOf(originalArr, originalArr.length + 1);

        // EN: Store the new value at the last index
        // KO: 마지막 인덱스에 새로운 값 저장
        newArray[newArray.length - 1] = val;

        // EN: Return the new extended array
        // KO: 확장된 배열 반환
        return newArray;
    }

    public static void main(String[] args) {
        // EN: Original string with numbers (including negatives)
        // KO: 원본 문자열 (음수 포함)
        String test1 = "15, -41, 12, 42, -12, 2, 4";

        // EN: Replace all characters except digits(0-9), comma, minus with empty string
        // KO: 숫자(0-9), 콤마(,), 마이너스(-) 이외의 문자를 제거
        String test2 = test1.replaceAll("[^0-9,-]", "");

        // EN: Split the string by comma delimiter
        // KO: 문자열을 콤마(,) 기준으로 분리
        StringTokenizer strtokn = new StringTokenizer(test2, ",");

        // EN: Create integer array with token count as length
        // KO: 토큰 개수만큼 정수 배열 생성
        int[] originalArr = new int[strtokn.countTokens()];

        int index = 0;
        // EN: While there are tokens, parse each as int and insert into array
        // KO: 토큰이 남아있으면 정수로 변환해 배열에 저장
        while (strtokn.hasMoreTokens()) {
            originalArr[index++] = Integer.parseInt(strtokn.nextToken());
        }

        // EN: Append 99 to the array
        // KO: 배열 끝에 99 추가
        int[] newArray = Add(originalArr, 99);

        // EN: Initialize max number with the minimum possible value
        // KO: 최댓값 변수를 가장 작은 값으로 초기화
        int maxNumber = Integer.MIN_VALUE;

        // EN: Loop through array to find the maximum number
        // KO: 배열을 순회하면서 최댓값 탐색
        for (int number : newArray) {
            if (number > maxNumber) {
                maxNumber = number;
            }
        }

        // EN: Print the maximum number (final result)
        // KO: 최댓값 출력 (최종 결과)
        System.out.println(maxNumber); // Output: 99
    }
}
