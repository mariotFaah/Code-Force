const phrase = "test test 13"

let ttl = 0
let mots = phrase.split(" "); // => [test,test,123]
console.log(mots.length)
for(let i=0; i < mots.length; i++)
{
	ttl = ttl+mots[i].length;
}

console.log(ttl)