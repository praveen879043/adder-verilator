module adder_tb;
    logic [1:0] a, b;
    logic [2:0] sum;

    adder dut (
        .a(a),
        .b(b),
        .sum(sum)
    );

    initial begin
        a = 2; b = 1; #1;
        $display("a=%0d b=%0d sum=%0d", a, b, sum);
        if (sum != 3) $fatal("Test failed!");

        a = 1; b = 1; #1;
        $display("a=%0d b=%0d sum=%0d", a, b, sum);
        if (sum != 2) $fatal("Test failed!");

        $display("All tests passed.");
        $finish;
    end
endmodule

