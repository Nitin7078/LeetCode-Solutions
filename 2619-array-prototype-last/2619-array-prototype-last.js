/**
 * @return {null|boolean|number|string|Array|Object}
 */
Array.prototype.last = function() {
    let ans = -1 ;
    for(const key of this){
        ans = key;
    }
    return ans;
};

/**
 * const arr = [1, 2, 3];
 * arr.last(); // 3
 */