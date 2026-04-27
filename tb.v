`timescale 1ns/1ps

module tb;

reg clk;
reg rst;
reg sin;
wire [3:0] q;

shift_register dut (
    .clk(clk),
    .rst(rst),
    .sin(sin),
    .q(q)
);

always #5 clk = ~clk;

initial begin
    $dumpfile("shift_register.vcd");
    $dumpvars(0,tb);

    clk = 0;
    rst = 1;
    sin = 0;

    #10 rst = 0;

    sin = 1; #10;
    sin = 0; #10;
    sin = 1; #10;
    sin = 1; #10;
    sin = 0; #10;
    sin = 1; #10;

    #20 $finish;
end

always @(posedge clk) begin
    $display("time=%0t sin=%b q=%b", $time, sin, q);
end

endmodule
