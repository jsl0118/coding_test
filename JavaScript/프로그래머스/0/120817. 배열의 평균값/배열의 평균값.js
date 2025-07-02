function solution(numbers) {
    var sum = numbers.reduce((sum1, num) => sum1 + num, 0);
    return sum/numbers.length;
}