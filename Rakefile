task :default => [:bindir, :pbpaste, :pbcopy]

task :bindir do
	if not Dir.exist?("bin")
		Dir.mkdir("bin")
	end
end
task :pbpaste do
	%x{gcc pbpaste.c -Wall -o bin/pbpaste}
end
task :pbcopy do
	%x{gcc pbcopy.c -mwindows -Wall -o bin/pbcopy}
end