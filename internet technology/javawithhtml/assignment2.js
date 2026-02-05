function separatePrimesAndComposites(numbers) {
  
    function isPrime(num) {
        if (num <= 1) return false;
        if (num <= 3) return true;
        if (num % 2 === 0 || num % 3 === 0) return false;
        
       
        for (let i = 5; i * i <= num; i += 6) {
            if (num % i === 0 || num % (i + 2) === 0) return false;
        }
        return true;
    }

    const prime = [];
    const composite = [];
    
    
    for (let num of numbers) {
        if (num <= 1) {
            
            continue;
        } else if (isPrime(num)) {
            prime.push(num);
        } else {
            composite.push(num);
        }
    }
    
    return {
        prime: prime,
        composite: composite
    };
}


const numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20];
const result = separatePrimesAndComposites(numbers);
console.log(result);