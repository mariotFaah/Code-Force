const n = parseInt(readline()); 
const inputs = readline().split(' ');
let best = null;

if (n === 0) {
    console.log(0);
} else {
    for (let i = 0; i < n; i++) {
        const t = parseInt(inputs[i]);

        if (best === null) {
            best = t;
        } else {
            const absT = Math.abs(t);
            const absBest = Math.abs(best);

            if (absT < absBest) {
                best = t;
            } else if (absT === absBest && t > best) {
                best = t;
            }
        }
    }

    console.log(best);
}
