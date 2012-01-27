task :default => [:pbpaste, :pbcopy]

task :pbpaste do
	%x{gcc pbpaste.c -mwindows -o bin/pbpaste}
end
task :pbcopy do
	%x{gcc pbcopy.c -mwindows -o bin/pbcopy}
end