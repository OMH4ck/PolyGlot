contract test {
    function fa(bytes memory) public { }
    function(bytes memory) external internal a = fa;
}
// ----
// TypeError: (106-108): Type function (bytes memory) is not implicitly convertible to expected type function (bytes memory) external.
