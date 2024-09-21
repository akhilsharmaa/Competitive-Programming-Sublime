import sublime
import sublime_plugin

class ShowPanel(sublime_plugin.EventListener):
    def on_activated_async(self, view):
        pass
        # view.window().run_command("show_panel", {"panel": "output.SublimeLinter"})