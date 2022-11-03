const palindrome = [4,4,2,2,4,4]

const len = palindrome.length

for(let i = 0; i < len; i++){
    if(palindrome[i] !== palindrome[len - i - 1]) {
        console.log("False");
    }
}
console.log("True")