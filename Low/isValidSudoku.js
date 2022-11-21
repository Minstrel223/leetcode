/**
 * @param {character[][]} board
 * @return {boolean}
 */
var isValidSudoku = function (board) {
    let mapCols = new Array();
    for (i = 0; i < 9; i++) {
        mapCols.push(new Map());
    }
    let mapSquares = new Array();
    for (i = 0; i < 3; i++) {
        mapSquares[i] = new Array();
        for (j = 0; j < 3; j++) {
            mapSquares[i][j] = new Map();
        }
    }

    for (i = 0; i < 9; i++) {
        let mapRow = new Map();
        for (j = 0; j < 9; j++) {
            if (board[i][j] != ".") {
                if (mapRow.has(board[i][j]) || mapCols[j].has(board[i][j]) || mapSquares[Math.floor(i / 3)][Math.floor(j / 3)].has(board[i][j])) return false;
                else {
                    mapRow.set(board[i][j], 1);
                    mapCols[j].set(board[i][j], 1);
                    mapSquares[Math.floor(i / 3)][Math.floor(j / 3)].set(board[i][j], 1);
                }
            }
        }
    }
    return true;
};