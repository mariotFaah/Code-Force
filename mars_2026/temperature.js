const n = 5;
var inputs = [12, -9, 2, 4, 1];
let min = inputs[0]; // On initialise avec la première valeur
console.log(Math.min(...inputs));

for(let i=0; i<n; i++)
{
    inputs[i] = Math.abs(inputs[i])
}
console.log("voici la valeur la plus proche de zero")
console.log(Math.min(...inputs));


for (let i = 1; i < n; i++) {
    // On compare la valeur actuelle avec le minimum trouvé jusqu'à présent
    if(Math.abs(inputs[i]) < Math.abs(min) || 
       (Math.abs(inputs[i]) === Math.abs(min) && inputs[i] > min)) {
        min = inputs[i];
    }
}

console.log(min); // Affiche 1 (le plus proche de zéro)