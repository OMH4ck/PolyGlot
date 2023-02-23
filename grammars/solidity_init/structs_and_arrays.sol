// bug #1801
contract test {
    function f(string calldata a, bytes calldata b, uint[] calldata c) external {}
}
// ----
//     :test
// [
//   {
//     "inputs":
//     [
//       {
//         "internalType": "string",
//         "name": "a",
//         "type": "string"
//       },
//       {
//         "internalType": "bytes",
//         "name": "b",
//         "type": "bytes"
//       },
//       {
//         "internalType": "uint256[]",
//         "name": "c",
//         "type": "uint256[]"
//       }
//     ],
//     "name": "f",
//     "outputs": [],
//     "stateMutability": "nonpayable",
//     "type": "function"
//   }
// ]
