function solution(s) {
    let arr = s.split(" ").map(Number);
    max=Math.max(...arr);
    min=Math.min(...arr);
    return `${min} ${max}`;
}