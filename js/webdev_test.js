
function add_five(x) {
    return x+5;
}
function add_three(x) {
    return x+3;
}
function add_four(x) {
    return x+4;
}
function multiply_by_three(x) {
    return x*3;
}
function multiply_by_seven(x) {
    return x*7;
}
function divide_by_three(x) {
    return x/3;
}
function divide_by_seven(x) {
    return x/7;
}
function subtract_five(x) {
    return x-5;
}
function subtract_three(x) {
    return x-3;
}


function solver(){
	var x = arguments[0];
    var output = new Array();
	for (var i = 1; i < arguments.length; i++) {
    	output[i-1] = arguments[i](x);
    }
    
	document.write('[' + output.toString().replace(/,/g, ', ') + ']' + '\n');
}

solver(3, add_three, add_five);
solver(12, add_five, subtract_three, multiply_by_seven, divide_by_three);
