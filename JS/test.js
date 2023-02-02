function rainbow(str) {
    var multiplier = 5;
    var result = "";
    for (var i = 0; i < str.length; i++) {
        result += "<font style='color: hsl(" + i * multiplier % 360 + ", 100%, 70%)'>";
        result += str.substr(i, 1);
        result += "</font>";
    }
    return result;
}
while(true) {

console.log(rainbow("John is gay"))

}
