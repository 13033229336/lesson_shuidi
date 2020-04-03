var myAtoi = function(str) {
    const reg = /\s*([-|\+]?[0-9]*).*/
    const res = str.match(reg)
    const max = Math.pow(2, 31) - 1
    const min = -Math.pow(2, 31)
    let n = 0
    if (res) {
        n = +res[1]
        if (isNaN(n)) {
            n = 0
        }
    }
    if (n > max) {
        return max
    } else if (n < min) {
        return min
    }
    return n
};

console.log(myAtoi("  4662df  "));