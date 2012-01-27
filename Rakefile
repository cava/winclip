task :default => [:pbpaste, :pbcopy]

task :pbpaste do
	%x{gcc pbpaste.c -Wall -o bin/pbpaste}
end
task :pbcopy do
	%x{gcc pbcopy.c -mwindows -Wall -o bin/pbcopy}
end