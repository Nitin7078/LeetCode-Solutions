/**
 * @return {Generator<number>}
 */
//  let i = 0;
 let fibo = function( j ){
    if(j == 0 ){
        return 0 ;
    }
    if( j == 1){
        return 1;
    }
    return fibo(j-1)+fibo(j-2);
 }
var fibGenerator = function*() {
     let a = 0;
    let b = 1;
    while (true) {
        yield a;
        let temp = a + b;
        a = b;
        b = temp;
    }
};

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */