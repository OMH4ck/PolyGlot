contract Medium {
    uint public a;
    uint[] public b;
    function f1(uint x) public returns (uint) { a = x; b[uint8(msg.data[0])] = x; }
    function f2(uint x) public returns (uint) { b[uint8(msg.data[1])] = x; }
    function f3(uint x) public returns (uint) { b[uint8(msg.data[2])] = x; }
    function g7(uint x) public payable returns (uint) { b[uint8(msg.data[6])] = x; }
    function g8(uint x) public payable returns (uint) { b[uint8(msg.data[7])] = x; }
    function g9(uint x) public payable returns (uint) { b[uint8(msg.data[8])] = x; }
    function g0(uint x) public payable returns (uint) { require(x > 10); }
}
// ====
// optimize: true
// optimize-runs: 2
// ----
// creation:
//   codeDepositCost: 141000
//   executionCost: 190
//   totalCost: 141190
// external:
//   a(): 998
//   b(uint256): 2063
//   f1(uint256): 41254
//   f2(uint256): 21298
//   f3(uint256): 21342
//   g0(uint256): 332
//   g7(uint256): 21208
//   g8(uint256): 21186
//   g9(uint256): 21142
