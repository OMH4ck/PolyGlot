interface I {}
contract C is I(2) {}
// ----
// TypeError: (29-33): Wrong argument count for constructor call: 1 arguments given but expected 0. Remove parentheses if you do not want to provide arguments here.
