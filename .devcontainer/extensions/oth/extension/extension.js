"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.deactivate = exports.activate = void 0;
const vscode = require("vscode");
const child = require("child_process");


async function activate(context) {
    context.subscriptions.push(vscode.commands.registerCommand("oth.launchGUI", 
        () => {
            let vncurl = `https://${process.env['CODESPACE_NAME']}-6080.${process.env['GITHUB_CODESPACES_PORT_FORWARDING_DOMAIN']}/vnc.html?autoconnect=true`
            vscode.env.openExternal(vscode.Uri.parse(vncurl))
        }
    ))
    context.subscriptions.push(vscode.commands.registerCommand("oth.startProgram", 
        () => {
            vscode.window.activeTerminal.sendText('/workspaces/$RepositoryName/run.sh');
        }
    ))
}
exports.activate = activate