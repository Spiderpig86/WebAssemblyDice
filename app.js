// Make the dice roll

var dice = document.querySelector('.dice');

dice.addEventListener('click', function() {
    
    // Use an underscore to call C functions
    var result = _roll_dice();

    // Alternative way
    // var result = Module.ccall(
    //      'roll_dice',    // Func name
    //      'number',       // Return type
    //      ['number'],     // Arg type
    //      [42]);          // Args
    console.log(result);    
    dice.className = "dice dice-" + result;
});
