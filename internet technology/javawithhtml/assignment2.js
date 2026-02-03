function separatePrimeAndComposite(numberArray) {
   
    let result = {
        prime: [],
        composite: []
    };

    
    for (let i = 0; i < numberArray.length; i++) {
        let num = numberArray[i];

        
        if (num <= 1) continue;

        let isPrime = true; 

        
        for (let j = 2; j < num; j++) {
            
            if (num % j === 0) {
                isPrime = false;
                break; 
            }
        }

       
        if (isPrime) {
            
            result.prime.push(num);
        } else {
            
            result.composite.push(num);
        }
    }

    
    return result;
}


const numbers = [15-24];
console.log(separatePrimeAndComposite(numbers));