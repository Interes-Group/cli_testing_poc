import {test, expect, Shell} from "@microsoft/tui-test";

test.use({shell: Shell.Bash, rows: 10});

test("should print help", async ({terminal}) => {
	terminal.submit("../sumcli");
	await expect(terminal.getByText("Usage:")).toBeVisible();
	await expect(terminal).toMatchSnapshot();
});

test("should print sum of numbers", async ({terminal}) => {
	terminal.submit("../sumcli 1 2");
	await expect(terminal.getByText("3.00")).toBeVisible();
	await expect(terminal).toMatchSnapshot();
});