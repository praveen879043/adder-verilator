module adder (
    input  logic [1:0] a,
    input  logic [1:0] b,
    output logic [2:0] sum
);
    always_comb begin
        sum = a + b;
    end
endmodule

