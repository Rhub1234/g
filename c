local gameId = game.GameId

if gameId == 3150475059 then

    loadstring(game:HttpGet("https://api.luarmor.net/files/v3/loaders/2d10bb089f4280f093c9e5af84ca8d9d.lua"))()
    print("WiiHub Football Fusion 2 loaded successfully")

elseif gameId == 4777817887 then

    loadstring(game:HttpGet("https://api.luarmor.net/files/v3/loaders/33e520d1296dff82ff9920aa46f20de1.lua"))()
    print("R hub BladeBall loaded successfully")

else
    print("Unsupported")
end
